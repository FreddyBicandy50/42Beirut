#!/bin/bash

# Run check 
clear  && cd /home/fbicandy/42Beirut/libft-war-machine && bash grademe.sh > res 

# FT
ft="ft_"

# FUNCTIONS
isalnum="${ft}isalnum"
strchr="${ft}strchr"
isalpha="${ft}isalpha"
isdigit="${ft}isdigit"
strlen="${ft}strlen"
tolower="${ft}tolower"
toupper="${ft}toupper"
toupper="${ft}toupper"
isascii="${ft}isascii"
isprint="${ft}isprint"
memset="${ft}memset"
bzero="${ft}bzero"
memcpy="${ft}memcpy"
memmove="${ft}memmove"
strlcpy="${ft}strlcpy"
strlcat="${ft}strlcat"
strrchr="${ft}strrchr"
strncmp="${ft}strncmp"

# Use grep to find occurrences of the function name in the output
grep "$isalnum" res
grep "$strchr" res
grep "$isalpha" res
grep "$isdigit" res
grep "$strlen" res
grep "$tolower" res
grep "$toupper" res
grep "$toupper" res
grep "$isascii" res
grep "$isprint" res
grep "$memset" res
grep "$bzero" res
grep "$memcpy" res
grep "$memmove" res
grep "$strlcpy" res
grep "$strlcat" res
grep "$strrchr" res
grep "$strncmp" res
echo "********************************************NEW**********************************************"
