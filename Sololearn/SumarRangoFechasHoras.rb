require 'date'

total_horas = 0


loop do
  puts "Por favor, ingresa una fecha en formato YYYY-MM-DD (o escribe 'salir' para terminar):"
  fecha_input = gets.chomp

  break if fecha_input.downcase == 'salir'

  puts "Por favor, ingresa un rango de horario en formato HH:MM-HH:MM:"
  rango_input = gets.chomp

  begin
    fecha = Date.strptime(fecha_input, "%Y-%m-%d")
    inicio, fin = rango_input.split("-").map { |hora| Time.strptime(hora, "%H:%M") }
    
    if inicio < fin
      diferencia = fin - inicio
      total_horas += diferencia
    else
      puts "Error: La hora de inicio debe ser antes que la hora de finalización."
    end
  rescue ArgumentError
    puts "Formato de fecha u hora no válido."
  end
end

horas_totales, minutos_totales = total_horas.divmod(3600)
minutos_totales /= 60

puts "El total de horas ingresadas es #{horas_totales} horas y #{minutos_totales} minutos."