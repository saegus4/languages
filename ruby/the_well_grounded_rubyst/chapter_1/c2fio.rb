num = File.read("temp.dat")
fahrenheit = (num.to_i * 9 / 5) + 32
File.write("result.out", fahrenheit)
