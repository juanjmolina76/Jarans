require 'date'

class Semaforo
  attr_accessor :elaboration_date, :expedition_date

  def initialize(elaboration_date, expedition_date)
    @elaboration_date = Date.parse(elaboration_date)
    @expedition_date = Date.parse(expedition_date)
    today = Date.today
  end

  def calc
    restant_days = today - expedition_date
    diference_in_days = elaboration_date - expedition_date
    rango = diference_in_days / 30

    puts diference_in_days.to_i
    puts restant_days.to_i
  end

  def rango_color
    if rango.to_i <= 1
      color = :red
    elsif rango.to_i >= 2
      color = :green
    else
      color = :yellow
    end

    puts color
  end

  def self.new_with_proc(proc)
    new(proc.call)
  end
end

# Crea un proc que valide las fechas
proc_validar_fechas = proc do |elaboration_date, expedition_date|
  while !elaboration_date.match(/\d{4}-\d{2}-\d{2}/) ||
        !expedition_date.match(/\d{4}-\d{2}-\d{2}/)
    puts "Las fechas ingresadas no son validas. Por favor, ingrese nuevamente."
    puts "Fecha de elaboracion (formato aaaa, mm, dd): "
    elaboration_date = gets.chomp
    puts "Fecha de expedicion (formato aaaa, mm, dd): "
    expedition_date = gets.chomp
  end

  [elaboration_date, expedition_date]
end

# Crea un objeto Semaforo con el proc de validación
semaforo = Semaforo.new_with_proc(proc_validar_fechas)

# Solicita las fechas al usuario
semaforo.get_data

# Realiza los cálculos
semaforo.calc

# Determina el color
semaforo.rango_color
