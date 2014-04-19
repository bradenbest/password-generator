password-generator: 
	cd src && $(MAKE)
	mv src/$@ ./

clean:
	cd src && $(MAKE) clean

install: password-generator
	mv $^ /usr/local/bin

uninstall:
	rm /usr/local/bin/password-generator

.PHONY: clean install uninstall
