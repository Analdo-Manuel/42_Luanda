cat /etc/passwd | sed '/^4/d' | sed -n 'n;p' | cut -d : -f 1| rev | sort -r | tr n , | sed 's/,/_, /g' | sed 's/, $/./g'
