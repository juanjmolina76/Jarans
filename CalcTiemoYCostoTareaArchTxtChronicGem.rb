require 'chronic'

class RegistroTiempo
    
 attr_accessor :fecha, :hora_inicio, :hora_fin

  def initialize(fecha, hora_inicio, hora_fin)
    @fecha = fecha
    @hora_inicio = hora_inicio
    @hora_fin = hora_fin
  end

  def calcular_horas_trabajo
    inicio = Time.parse(@hora_inicio)
    fin = Time.parse(@hora_fin)
    horas_trabajo = (fin - inicio) / 3600.0  # Calcula las horas trabajadas
  end
end

class CalculadoraCosto
  COSTO_HORA = 10  # Cambia esto al costo por hora que desees

  def calcular_costo_total(registros)
    total_horas = registros.map(&:calcular_horas_trabajo).sum
    costo_total = total_horas * COSTO_HORA
    costo_total
  end
end

class RegistroArchivo
  def self.agregar_registro(registro)
    File.open("registros.txt", "a") do |file|
      file.puts("#{registro.fecha}, #{registro.hora_inicio}, #{registro.hora_fin}")
    end
  end

  def self.leer_registros
    registros = []
    File.open("registros.txt", "r") do |file|
      file.each_line do |line|
        fecha, hora_inicio, hora_fin = line.split(", ")
        registros << RegistroTiempo.new(fecha, hora_inicio, hora_fin)
      end
    end
    registros
  end
end

# Uso del programa
registro = RegistroTiempo.new("2023-08-21", "02:30:00", "10:20:00")
RegistroArchivo.agregar_registro(registro)

registros = RegistroArchivo.leer_registros
calculadora = CalculadoraCosto.new
costo_total = calculadora.calcular_costo_total(registros)
puts "El costo total del trabajo es: $#{costo_total}"
