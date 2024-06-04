filename="original.txt"
touch $filename

> $filename
echo "Ronaldinho Gaucho" >> $filename
echo "Ronaldo" >> $filename
echo "Rivaldo" >> $filename
echo "Kaka" >> $filename
echo "Cafu" >> $filename
echo "Roberto Carlos" >> $filename

make
clear

./replaceAll $filename 'a' 'A'
echo "Original file"
echo ""
cat $filename
echo "-------------------------"
echo "New file"
echo ""
cat "$filename.replace"