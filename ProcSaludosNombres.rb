greet = Proc.new do |x|
    puts "Welcome #{x}"
end

goodbye = Proc.new do |x|
    puts "Goodbye #{x}"
end

def say(arr, proc)
    arr.each { |x| proc.call x}
end

    puts "Ingrese una lista de nombres separado spor comas ",": "
nombres = gets.chomp.split (',')
#people = ["David", "Amy", "John"]
say(nombres, greet)
say(nombres, goodbye)