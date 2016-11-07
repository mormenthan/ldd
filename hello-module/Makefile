# hello module 
# print hello 
# 2015-01-27

obj-m       += hello.o
KVERSION := $(shell uname -r)
 
all:
#	$(MAKE) -C /usr/src/linux-headers-$(KVERSION) M=$(PWD) modules
	$(MAKE) -C /lib/modules/$(KVERSION)/build M=$(PWD) modules
 
clean:
#	$(MAKE) -C /usr/src/linux-headers-$(KVERSION) M=$(PWD) clean
	$(MAKE) -C /lib/modules/$(KVERSION)/build M=$(PWD) clean
