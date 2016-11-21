#
# module loaded with parameter demo
#

obj-m       += hello-with-parameter.o
KVERSION := $(shell uname -r)
 
all:
#	$(MAKE) -C /usr/src/linux-headers-$(KVERSION) M=$(PWD) modules
	$(MAKE) -C /lib/modules/$(KVERSION)/build M=$(PWD) modules
 
clean:
#	$(MAKE) -C /usr/src/linux-headers-$(KVERSION) M=$(PWD) clean
	$(MAKE) -C /lib/modules/$(KVERSION)/build M=$(PWD) clean
