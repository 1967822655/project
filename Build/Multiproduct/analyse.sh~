#!/bin/bash
echo "pls input num:"
echo -e "[1:delete student 2:add student 3:modify student]\n[4: delete couse  5: add couse  6: modify couse ]"
read -p "-->" input
while [ ! $input = "1" -a ! $input = "2" -a ! $input = "3" -a ! $input = "4" -a ! $input = "5"  -a ! $input = "6" ]
do
    read -p "Pls input what you want to [1:delete 2:add 3:modify]" input
done

if [ $input = "1" ]; then
    cat ../../log.txt | grep "^删除学生"
    echo -e "\n共计： "
    cat ../../log.txt | grep "^删除学生" | wc -l
elif [ $input = "2" ]; then
    cat ../../log.txt | grep "^添加学生"
    echo -e "\n共计： "
    cat ../../log.txt | grep "^添加学生" | wc -l
elif [ $input = "3" ]; then
    cat ../../log.txt | grep "^修改学生"
    echo -e "\n共计： "
    cat ../../log.txt | grep "^修改学生" | wc -l
elif [ $input = "4" ]; then
    cat ../../log.txt | grep "^删除课程"
    echo -e "\n共计： "
    cat ../../log.txt | grep "^删除学生" | wc -l
elif [ $input = "5" ]; then
    cat ../../log.txt | grep "^添加课程"
    echo -e "\n共计： "
    cat ../../log.txt | grep "^添加学生" | wc -l
elif [ $input = "6" ]; then
    cat ../../log.txt | grep "^修改课程"
    echo -e "\n共计： "
    cat ../../log.txt | grep "^修改学生" | wc -l
fi
