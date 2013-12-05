CXXSOURCES=../../Log4cplus.cpp \
		   ../../LoggerModule.cpp 
SOURCES=$(CXXSOURCES)
LOG4CPLUS_SRC=../../../log4cplus/win/vc10_x86
GXX=cl
CPPFLAGS=-I. \
		 -I$(LOG4CPLUS_SRC)/include \
		 /nologo /W3 /WX- /Oy- /D "WIN32" /D "_LIB" /D "_MBCS" /D "_CRT_SECURE_NO_WARNINGS" /EHsc /GS /analyze- 
LDFLAGS=/LIBPATH:"$(LOG4CPLUS_SRC)
LOG4CPLUSWRAPPERLIB=log4cplusWrapper
debug: src_cpp_dbg
	lib /out:"$(LOG4CPLUSWRAPPERLIB)D.lib" *.obj  $(LDFLAGS) log4cplusSD.lib 
src_cpp_dbg:
	$(GXX) -c $(SOURCES) $(CPPFLAGS) /MTd /Od /Gm /RTC1 /ZI /Gd  /Fd"vc100log4cpluswrapperD.pdb"
release: src_cpp_rel
	lib /out:"$(LOG4CPLUSWRAPPERLIB).lib" *.obj $(LDFLAGS) log4cplusS.lib
src_cpp_rel:
	$(GXX) -c $(SOURCES) $(CPPFLAGS) /MT /O2 /Oi /Gm- /Zi /D "NDEBUG" /Gy /Gd  /Fd"vc100log4cpluswrapper.pdb"
test:
	$(GXX) -o main main.cpp $(CPPFLAGS)  $(LDFLAGS) -l$(LOG4CPLUSWRAPPERLIB) $(LIBS) 
clean:
	del *.o "$(LOG4CPLUSWRAPPERLIB)D.lib" "$(LOG4CPLUSWRAPPERLIB).lib" main YRXCore.log*  
