#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -f 1 -d ':' | rev |
   	sort -r | sed -n "${FT_LINE1},${FT_LINE2} p" |  tr '\n' ' ' | 
	sed 's/ /, /g' | sed 's/..$/./' | tr -d '\n'
