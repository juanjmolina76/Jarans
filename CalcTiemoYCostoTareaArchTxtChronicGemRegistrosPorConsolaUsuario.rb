require 'chronic'

class RegistroTiempo
  @@count = 0
  attr_accessor :fecha, :hora_inicio, :hora_fin

  def initialize(fecha, hora_inicio, hora_fin)
    @fecha = fecha
    @hora_inicio = hora_inicio
    @hora_fin = hora_fin
    @@count += 1
  end

  def self.get_count
    @@count
  end


  def calcular_horas_trabajo
    inicio = Chronic.parse(@hora_inicio)
    fin = Chronic.parse(@hora_fin)
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

# Obtener registros del usuario desde la consola
puts "Por favor, ingresa los registros de tiempo (formato: YYYY-MM-DD HH:MM:SS)"
loop do
  print "Fecha (o 'q' para salir): "
  fecha = gets.chomp
  break if fecha.downcase == 'q'

  print "Hora de inicio: "
  hora_inicio = gets.chomp

  print "Hora de finalización: "
  hora_fin = gets.chomp

  registro = RegistroTiempo.new(fecha, hora_inicio, hora_fin)
  RegistroArchivo.agregar_registro(registro)
end

registros = RegistroArchivo.leer_registros
calculadora = CalculadoraCosto.new
costo_total = calculadora.calcular_costo_total(registros)
puts "El costo total del trabajo es: $#{costo_total}"

puts RegistroTiempo.get_count