=begin
f = File.new("test.txt","w+")
f.puts("todo esto esta en la primera linea")
puts f.size

f.close
=end
puts File.zero?("test.txt")
puts File.read("test.txt")