#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>

#include <legacy/Singleton.h>
#include <legacy/GraphicLog.h>

namespace android {
ANDROID_SINGLETON_STATIC_INSTANCE(GraphicLog)
}

extern "C" void _ZN7android10GraphicLogC1Ev(void* log) {
}

extern "C" void _ZN7android10GraphicLog7logImplEiii(void* log, int32_t tag, int32_t buffer) {
}


