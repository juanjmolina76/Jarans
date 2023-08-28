def cuad (* p)
    p.each {|x| puts x*x}
end
#cuad (3, 2, 4)

puts :auto.object_id
puts :name.object_id
puts :auto.object_id

puts "hola".object_id
puts "hola".object_id