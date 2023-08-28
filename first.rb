text = "El dicho al hecho hay un largo trecho, si no hay nada que decir. Tal vez lo que se diga no fue dicho.
Antes de un cuento"
text.downcase!
freqs = {}
freqs.default =0
text.each_char {|x|freqs[x] +=1}
("a".."z").each { |y| puts "#{y} : #{freqs[y]}"}
=begin
probando los comentarios y subiendo en github
=end

=begin
segundo nuevo comentario
=end