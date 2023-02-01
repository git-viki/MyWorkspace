# Day1
print("hello")
print(1)

# Day5 

#course : 100dayofcode
#language : Python Programming
#author : viki

# this is a comment
print("this line \n new line") #escape sequences 
print("i'm a good boy")
print("you are also a good boy/girl")

a= 7*10 
print(a)
b=10/5
print(b)
c=10+16
print(c)
d=12-3
print(d) 

print( a,"\n",b,"\n",c,"\n",d)


print("comment") # comment to uncomment shortcut( ctrl + / )

"""  
  
sab comment
      ho jaye 
      jaadu mantar choo !!

"""

# '''  triple [ ''' msg ''' ]    or  [ """ msg """ ] ke andar likha hua sara msg comment ho jayega !


print("hello")
print("hello")
print("hello")   # alt + shift + down arrow 
                 # copy paste your program in next line
print("hello")
print("hello")
print("hello")
print("hello")
print("hello")



print("  my name is    \"kumar vicky\" .    ")
print("hey ! I\'m vicky. ")

#multiple value in print
print("1st","2nd","3rd",500)
print("hello", 43, 876, sep=" ~ ")
print("hello", 43, 876, sep=" + ")
print("hello", 43, 876, sep=" = ") #use of sep keyword 


print("hello", 43, 876, sep=" = " , end="009")
print("viki")
                              #  end parameter       
print("hello", 43, 876, sep=" = " , end="009\n")
print("viki")



print(" Day 5 is End ")


#day6


'''
Mad Libs Generator
-------------------------------------------------------------
'''

# Questions for the user to answer

noun = input('Choose a noun: ')

p_noun = input('Choose a plural noun: ')

noun2 = input('Choose a noun: ')

place = input('Name a place: ')

adjective = input('Choose an adjective (Describing word): ')

noun3 = input('Choose a noun: ')

# Print a story from the user input

print('------------------------------------------')

print('Be kind to your', noun, '- footed', p_noun)

print('For a duck may be somebody\'s', noun2, ',')

print('Be kind to your', p_noun, 'in', place)

print('Where the weather is always', adjective, '. \n')

print('You may think that is this the', noun3, ',')

print('Well it is.')

print('------------------------------------------')


'''
Number Guessing Game
-------------------------------------------------------------
'''


import random

attempts_list = []


def show_score():
  if not attempts_list:
      print('There is currently no high score, it\'s yours for the taking!')

  else:
      print(f'The current high score is {min(attempts_list)} attempts')


def start_game():
   attempts = 0
   rand_num = random.randint(1, 10)
   print('Hello traveler! Welcome to the game of guesses!')
   player_name = input('What is your name? ')
   wanna_play = input(
       f'Hi, {player_name}, would you like to play the guessing game?'
       '(Enter Yes/No): ')

   if wanna_play.lower() != 'yes':
      print('That\'s cool, Thanks!')
      exit()
   else:
       show_score()

   while wanna_play.lower() == 'yes':
       try:
           guess = int(input('Pick a number between 1 and 10: '))
           if guess < 1 or guess > 10:
               raise ValueError(
                   'Please guess a number within the given range')

           attempts += 1
           attempts_list.append(attempts)

           if guess == rand_num:
               print('Nice! You got it!')
               print(f'It took you {attempts} attempts')
               wanna_play = input(
                   'Would you like to play again? (Enter Yes/No): ')
               if wanna_play.lower() != 'yes':
                   print('That\'s cool, have a good one!')
                   break
               else:
                   attempts = 0
                   rand_num = random.randint(1, 10)
                   show_score()
                   continue
           else:
               if guess > rand_num:
                   print('It\'s lower')
               elif guess < rand_num:
                   print('It\'s higher')

       except ValueError as err:
           print('Oh no!, that is not a valid value. Try again...')
           print(err)


if __name__ == '__main__':
   start_game()
