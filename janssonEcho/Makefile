TARGETS := $(MAKECMDGOALS)

.PHONY: all $(TARGETS)
all: $(TARGETS)

$(TARGETS):
	mkapp -v -t $@ janssonEchoClient.adef
	mkapp -v -t $@ janssonEchoServer.adef

clean:
	rm -rf _build_* *.update

