file=$1
if [[ -z $file ]]; then
	echo "You need to provide a filename to compile"
else
	compiled_file=$(echo "$file"|sed 's/\.c//g')
	gcc -o compiled_tests/$compiled_file $file
fi
