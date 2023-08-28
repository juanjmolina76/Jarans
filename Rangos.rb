puts (1..9) {|x| puts x}

puts (2..5).to_a

puts (5..8).max

def sq (*p)
    p.each {|x| puts x*x}
end
puts "\n"
sq(3,5,7,9)

#subo cometario

