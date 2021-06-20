# V3
#CC=arm-hisiv500-linux-gcc
#CFLAGS=-I../sdk/Hi3516CV300_SDK_V1.0.4.0/mpp/include
#LDFLAGS=-L../sdk/Hi3516CV300_SDK_V1.0.4.0/mpp/lib -static
#LDLIBS=-lmpi -lVoiceEngine -pthread -lupvqe -ldnvqe -lisp -l_hidefog -lm -ldl

# V4
CC=arm-himix100-linux-gcc
CFLAGS=-I../sdk/Hi3516EV200_SDK_V1.0.1.2/mpp/include
LDFLAGS=-L../sdk/Hi3516EV200_SDK_V1.0.1.2/mpp/lib -static
LDLIBS=-lisp -lmpi -lVoiceEngine -pthread -lupvqe -ldnvqe -l_hidrc -l_hidehaze -l_hildci -lsecurec -lm -ldl

all: switchwdr dump_drc

#switchwdr: switchwdr.c
#	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
#	sudo cp $@ /mnt/noc/sdk

dump_drc: dump_drc.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
	sudo cp $@ /mnt/noc/sdk
