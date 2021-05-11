!#/bin/bash

clear

echo "╔╗╔╦╗░░░╔═╗░░░"
echo "║║╠╣╚╦═╗║═╬══╗"
echo "║╚╣║╬║╬╚╬═║║║║"
echo "╚═╩╩═╩══╩═╩╩╩╝"
echo "╔══╗░╔═╦╗░░░░░"
echo "╚╗╔╬═╣═╣╚╦═╦╦╗"
echo "░║║║╩╬═║╔╣╩╣╔╝"
echo "░╚╝╚═╩═╩═╩═╩╝░"




cd ../
make fclean
make
cd libasm_tester

cd tests

ls > ../read_list.txt

cd ../

correct_count=0;
general_count=0;

## read tests ##

printf "\n\nTesting READ\n\n"
sleep 0.2

filename='read_list.txt'
gcc ../*.o main_read.c -o read
while read line; do

echo "Test n. $general_count"
printf "\n"

orig=$(./read 1 "tests/$line")


user=$(./read 2 "tests/$line")

if [ "$user" = "$orig" ]; then
	tput setaf 2; echo "Test ok [OK]"
  correct_count=$((correct_count + 1))
else
	tput setaf 9; echo "test failed [FAILED]"
fi
printf "\n"
general_count=$((general_count + 1))
sleep 0.2
done < $filename

rm read

## strlen tests ##

printf "\n\nTesting STRLEN\n\n"

sleep 3

filename='strlen_tests.txt'
gcc ../*.o main_strlen.c -o strlen
while read line; do

  echo "Test n. $general_count"
  printf "\n"

orig=$(./strlen 1 "$line")
user=$(./strlen 2 "$line")



if [ $user = $orig ]; then
  tput setaf 2; echo "Test ok [OK]"
  correct_count=$((correct_count + 1))
else
	tput setaf 9; echo "test failed [FAILED]"
fi
general_count=$((general_count + 1))
printf "\n"
sleep 0.2
done < $filename

rm strlen

## strcmp tests ###

printf "\n\n\n"
echo "Testing STRCMP"
printf "\n\n\n"
sleep 2

filename='strlen_tests.txt'
gcc ../*.o main_strcmp.c -o strcmp

while read line; do
echo "Test n. $general_count"
printf "\n"
user=$(./strcmp 1 "$line")
orig=$(./strcmp 2 "$line")

if [[ ($orig -ge 0 && $user -ge 0) ]]; then
  tput setaf 2; echo "Test ok [OK]"
	correct_count=$((correct_count + 1))
elif [[ ($orig -lt 0 && $user -lt 0) ]]; then
	tput setaf 2; echo "Test ok [OK]"
	correct_count=$((correct_count + 1))
else
	tput setaf 9; echo "test failed [FAILED]"
fi
general_count=$((general_count + 1))
printf "\n"
sleep 0.2
done < $filename


## STRCPY TESTSS ###

printf "\n\n\n"

echo "STRCPY TESTS"

printf  "\n\n\n"

filename='strlen_tests.txt'
gcc ../*.o main_strcpy.c
while read line; do

  echo "Test n. $general_count"
  printf "\n"
orig=$(./a.out 1 "$line")


user=$(./a.out 2 "$line")

if [ "$user" = "$orig" ]; then
  tput setaf 2; echo "Test ok [OK]"
	correct_count=$((correct_count + 1))
else
	tput setaf 9; echo "test failed [FAILED]"
fi
general_count=$((general_count + 1))
printf "\n"
sleep 0.2
done < $filename

printf "\n\n\n"

echo "WRITE TESTS"

printf  "\n\n\n"

filename='strlen_tests.txt'
gcc ../*.o main_write.c -o write_
while read line; do

orig=$(./write_ 1 "$line")
echo "Test n. $general_count"
printf "\n"
user=$(./write_ 2 "$line")

if [ "$user" = "$orig" ]; then
	tput setaf 2; echo "Test ok [OK]"
  correct_count=$((correct_count + 1))
else
	tput setaf 9; echo "test failed [FAILED]"
fi
general_count=$((general_count + 1))
printf "\n"
sleep 0.2
done < $filename

rm write_

sleep 0.2

if [[ $general_count -eq $correct_count ]]; then
  tput setaf 2;
  printf "\n\n"
  cat drink

  printf  "\n\n"
  echo "TEST PASSED, YOU DESERVE THIS DRINK :)"
  printf  "\n\n"

else
  tput setaf 9;
    printf "\n\n"
    cat bomb
    echo "TEST FAILED :("
  printf "\n\n"
fi

rm read_list.txt
