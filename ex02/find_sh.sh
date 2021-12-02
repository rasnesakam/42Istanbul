message="$(find . -name "*.sh" | grep "\.\/.*\.sh")"
 echo "${message//.\//}"
 
