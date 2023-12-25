require 'date'

class Semaforo 
  attr_accessor :elaboration_date, :expedition_date
  
  def initialize (elaboration_date,expedition_date)
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

def get_data
    puts "Fecha de elaboracion (formato aaaa, mm, dd): "
       elaboracion_date = gets.chomp
       puts "Fecha de expedicion (formato aaaa, mm, dd): "
       expedition_date = gets.chomp

    while 
        !elaboration_date.match(/\d{4}-\d{2}-\d{2}/ || 
        !expedition_date.match(/\d{4}-\d{2}-\d{2}/)  )
        puts "Las fechas ingresadas no son validas. Por favor, ingrese nuevamente."
        puts "Fecha de elaboracion (formato aaaa, mm, dd): "
        elaboration_date = gets.chomp
        puts "Fecha de expedicion (formato aaaa, mm, dd): "
        expedition_date = gets.chomp
    end
        @elaboration_date = Date.parse(elaboration_date)
        @expedition_date = Date.parse(expedition_date)
end
 

def rango_color
  if rango.to_i < 1.0 / 3.0
    color = :red
  elsif rango.to_i > 2.0 / 3.0
    color = :green
  else
    color = :yellow
  end
    puts color 
end
end

p1 = Semaforo.new
p1.get_data
p1.calc
p1.rango_color
