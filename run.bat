@echo off
g++ ./Character/Attack/Dice/Dice.cpp ./Character/Attack/Attack.cpp ./Character/Character.cpp ./Character/Bard/Bard.cpp ./Battle/Battle.cpp ./Character/Knight/Knight.cpp ./Character/Mage/Mage.cpp ./Character/Ranger/Ranger.cpp  ./main.cpp -o output

output.exe
