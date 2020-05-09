MAKE=make
DIRS = proc \
	   jdbc-oracle \
	   jdbc-mysql \
	   mysql-connector-c++
CLEANDIRS = $(DIRS:%=clean-%)
#DIRS := $(wildcard */.)

.PHONY: code $(DIRS)

code: $(DIRS)

$(DIRS):
	$(MAKE) -C $@

clean: $(CLEANDIRS)
$(CLEANDIRS):
	$(MAKE) -C $(@:clean-%=%) clean
