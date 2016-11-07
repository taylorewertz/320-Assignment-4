print("Assignment #4-2, Taylor Ewertz, t_ewertz@yahoo.com");

for i=1,100 do
	if i % 3 == 0 and i % 5 == 0 then
		num = "FizzBuzz"
	elseif i % 3 == 0 then
		num = "Fizz"
	elseif i % 5 == 0 then
		num = "Buzz"
	else
		num = i
	end
	
	print(num)
end
