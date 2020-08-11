if [ -z $1 ]; then
	echo 'usage: ./dither.sh <img-name>'
	exit
fi

convert $1 -resize 50% $1
convert $1 -colors 64 -dither FloydSteinberg $1

