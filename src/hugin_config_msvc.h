/* src/include/config.h.  Generated by configure.  */
/* src/include/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* have boost */
#define HAVE_BOOST 1

/* have boost unit test framework library */
/* #undef HAVE_BOOST_TEST */

/* Define to 1 if you have the <boost/test/test_tools.hpp> header file. */
/* #undef HAVE_BOOST_TEST_TEST_TOOLS_HPP */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define if the FFTW library is available */
//#define HAVE_FFTW 

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <pano12/queryfeature.h> header file. */
#define HAVE_PANO12_QUERYFEATURE_H 1

/* Define to 1 if you have the <stdint.h> header file. */
//#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
//#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
//#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 1

/* Current Version of Hugin */
#define HUGIN_VERSION 0.7

/* Define if you have JPEG library */
#define HasJPEG 1

/* Define if you have Panotools library (pano13) */
#define HasPANO13 1

/* Define if you have PNG library */
#define HasPNG 1

/* Define if you have TIFF library */
#define HasTIFF 1

/* Install Location of Hugin */
#define INSTALL_LOCALE_DIR "locale"

/* Location for XRC information */
#define INSTALL_XRC_DIR "xrc"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "pablo.dangelo@web.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "hugin"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "hugin 0.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "hugin"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.5"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

// build against static glew libraries, which is good for Windows
#define GLEW_STATIC