

friends = [ 'jose','Leo','Brian','Arturo','Aron']

invitated_list = []

for friend in friends do
    if friend != 'Brian'
    invitated_list.push(friend)
    end
end

# SELECT METHOD

puts invitated_list
print invitated_list

puts "\n"

puts friends.select {|friend| friend !='Brian'}
puts "\n"
puts friends.reject {|friend| friend =='Brian'}

friends.each {|friend|puts "Hello, "+ friend}



# EACH METHOD

my_array = [1,2]

my_array.each do |x| 
    x *=2
    puts "The number is: #{x}"
end


my_hash = {"one"=>1,"two"=>2}

print my_hash.each {|key, value| "the #{key} is #{value}"}

#binding.pry
"\n"
print my_hash.each {|pair| "the pair is: #{pair}"}

#EACH_WITH_INDEX METHOD

puts "\n"
fruits = ["apple","banana","strawberry","pineapple"]

fruits.each_with_index { |fruit,index| puts fruit if index.even?}




shouting_at_friends = []

friends.each { |friend| shouting_at_friends.push(friend.upcase) }
print shouting_at_friends

# MAP


friends.map {|friend| friend.upcase}
puts friends

#my_order = [ 'medium Big Mac','medium fires','medium milkshake']
#my_order.map  do |item| item.gsub ('medium', 'extra large')
#end
#puts my_order

salaries = [1200,1500,1100,1800]
puts salaries.map {|salary|salary - 700}



# SELECT METHOD

print friends.select {|friend| friend != 'Brian'}
puts "\n"
print friends

# REDUCE METHOD

#es tambien llamado inject 
puts "\n"
my_mumbers = [5,6,7,8]
sum = 0

my_mumbers.each {|number| sum +=number}
puts sum


puts my_mumbers.reduce {|sum,number|sum + number}

#sum es el accumulator


#puedo pasar un valor inicial para el acucumulator, en este caso, va a ser = 0
mis_numeros = [5,6,7,8]
print mis_numeros.reduce(1000) {|suma, number| suma + number}



#ejemplo con votos

votes = ["Hamburgueseria de Bob", "Bistro San Marcos", "Hamburgueseria de Bob"]

votes.reduce(Hash.new(0)) do |result, vote|
    result[vote] += 1
    result    
end

binding.pry
# BANG METHODS !


friends.map {|friend| friend.upcase!}
puts friends



#PONER LOS METODOS ENUMERABLES DENTRO DE LA DEFICION DE METODOS


amigos = ['Sharon','Leo','Leila','Brian','Artur']

def invited_friends(amigos)
    puts amigos.select {|amigo| amigo != 'Brian'}
end

amigos
invited_friends(amigos)


retenciones = [1000,5000,2000,65000]
print retenciones.reduce(300000) {|resta, retencion| resta - retencion}
puts"\n"
print retenciones.reduce {|suma, retencion| suma + retencion}

puts"\n"
mis_numeros = [5,6,7,8]
print mis_numeros.reduce(1000) {|suma, numero| suma + numero}


votos = ["Milei","Massa","Massa","Milei","Milei"]
 
votos.reduce(Hash.new(0)) do |resultado, voto| resultado[voto] += 1 
    resultado
end



   

