require 'date'

class Semaforo 
  attr_accessor :elaboration_date, :expedition_date
  
  def initialize (elaboration_date,expedition_date)
    @elaboration_date = elaboration_date
    @expedition_date = expedition_date
    
today = Date. today


    def get_data
   puts "Fecha de elaboracion (formato aaaa, mm, dd): "
      elaboracion_date = gets.chomp
      puts "Fecha de expedicion (formato aaaa, mm, dd): "
      expedition_date = gets.chomp
    end

def calc

      restant_days = today - expedition_date

  diference_in_days = elaboration_date - expedition_date

  rango = diference_in_days / 30

puts diference_in_days.to_i
puts restant_days.to_i
end

def rango_color
  if rango.to_i < 1.0 / 3.0
      color = red
  if rango.to_i > 2.0 / 3.0
      color = green
  else
      color = yellow
  end
  end
  puts rango_color
end

end
end
  p1=Semaforo.new (2023,10,15), (2023,12,31)
p1.calc