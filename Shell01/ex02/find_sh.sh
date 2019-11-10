find . -type f -name "*.sh" | sed 's/\(.*\)\///g' | rev | cut -c4- | rev 
