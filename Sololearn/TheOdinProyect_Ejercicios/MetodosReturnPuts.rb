

def even_odd(number)
    unless number.is_a? Numeric
        puts "#{number} is not a number."
         
    end

    if number %2 == 0
        "the number is even"
    else
        "the number is odd"
    end 
end

even_odd(1)
even_odd(22)
even_odd("basico")

def puts_squared(number)
    puts number * number
end


def puts_Squared(number)
   return number * number
end

puts_squared(2)
puts_Squared(3)

puts puts_Squared(7)

frase = ["ser","no","o","ser"]
puts frase.reverse.join(" ").capitalize

def par_impar(numero)
    unless numero.is_a? Numeric
        return "\'#{numero}'\ no es un numero"
    end

    if numero.even? == true
        puts "el numero #{numero} es par"
    else
        puts "el numeo #{numero} es impar"
    end
end

par_impar(18)
par_impar(37)
par_impar("loco")

#BANG METODS TERMINAN con un ( ! ) y modifican la variable en si misma

saludo = "hola como va?"
saludo.reverse!
puts saludo


puts 17.between?(15,27)

texto = "lagarto".downcase.split('')
print texto
p texto
puts texto.uniq.length
puts texto.length

puts "using puts:"
puts []

p "using p:"
p []

