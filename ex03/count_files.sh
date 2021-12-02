count=$(find . -not -path "*\/.*" | wc -l)
printf '%d' $count
