#ifndef SUB_MODULE_A_H_
#define SUB_MODULE_A_H_

#if defined(EXPORT_SHARED_LIB)
/* For Shared Library */
#ifdef _WIN32
#define EXPORTED __declspec(dllexport)
#else
#define EXPORTED __attribute__((visibility("default")))
#endif

#elif defined(EXPORT_STATIC_LIB)
/* For Static Library */
#ifdef _WIN32
#define EXPORTED
#else
#define EXPORTED
#endif

#else
/* For User */
#ifdef _WIN32
#define EXPORTED __declspec(dllimport)  /* Delete it if the library is static lib */
#else
#define EXPORTED 
#endif
#endif

EXPORTED void SubModuleA_api(void);

#endif
