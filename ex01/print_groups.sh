message="$(id -Gn)"
printf '%s' "${message// /,}"  
