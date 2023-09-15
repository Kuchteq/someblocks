# Maintainer: Nicolas Geniteau <nicolas.geniteau@gmail.com>
pkgname=someblocks-wayrice
pkgver=1.0.1.r0.28d7e79
pkgrel=3
pkgdesc="dwm-like bar for dwl"
arch=('x86_64')
url="https://git.sr.ht/~raphi/someblocks"
license=('ISC')
makedepends=('git' 'make')
provides=("${pkgname%-git}")
conflicts=("${pkgname%-git}")

#prepare() {
#	cd "$srcdir/${pkgname%-git}"
#	# Use a custom blocks.h if the file is not empty
#	if [ -s "$srcdir/blocks.h" ]; then
#		cp -f "$srcdir/blocks.h" blocks.h
#	fi
#}

build() {
	cd ../
	make
}

package() {
	cd ../
	DESTDIR="$pkgdir/" PREFIX=/usr make install
}
