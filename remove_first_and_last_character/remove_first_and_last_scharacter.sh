function removeChar() {
    echo "$1" | sed 's/^.//;s/.$//'
}
removeChar $1
