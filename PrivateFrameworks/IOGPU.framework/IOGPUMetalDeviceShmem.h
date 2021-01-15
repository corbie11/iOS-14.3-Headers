/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
 */

@interface IOGPUMetalDeviceShmem : NSObject {
    IOGPUMetalDevice * _device;
    struct _IOGPUMetalDeviceShmemPrivate { 
        IOGPUMetalDeviceShmemPool *pool; 
        struct { 
            IOGPUMetalDeviceShmem *tqe_next; 
            id *tqe_prev; 
        } entry; 
        unsigned long long time_added; 
        void *shmemStart; 
        unsigned long long shmemSize; 
    }  _priv;
    unsigned int  _shmemID;
    unsigned int  _shmemSize;
    void * _virtualAddress;
    bool  purgeable;
}

@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;
@property (readonly) void*virtualAddress;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 shmemSize:(unsigned int)arg2 shmemType:(int)arg3;
- (unsigned int)shmemID;
- (unsigned int)shmemSize;
- (void*)virtualAddress;

@end