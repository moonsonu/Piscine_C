cat $1 | grep -i “bauer” | grep -i “nicolas” | grep -v “nicolasbauer” | grep -o ‘\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}’
