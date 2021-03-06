
#ifndef __PNPMON_FASTIO_H_
#define __PNPMON_FASTIO_H_

#include <ntifs.h>



BOOLEAN HookHandlerFastIoCheckIfPossible(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, BOOLEAN Wait, ULONG LockKey, BOOLEAN CheckForReadOperation, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
VOID HookHandlerFastIoDetachDevice(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice);
BOOLEAN HookHandlerFastIoDeviceControl(PFILE_OBJECT FileObject, BOOLEAN Wait, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, ULONG ControlCode, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoLock(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PLARGE_INTEGER Length, PEPROCESS ProcessId, ULONG Key, BOOLEAN FailImmediately, BOOLEAN Exclusive, PIO_STATUS_BLOCK StatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoQueryBasicInfo(PFILE_OBJECT FileObject, BOOLEAN Wait, PFILE_BASIC_INFORMATION Buffer, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoQueryNetworkOpenInfo(PFILE_OBJECT FileObject, BOOLEAN Wait, PFILE_NETWORK_OPEN_INFORMATION Buffer, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoQueryOpenInfo(PIRP Irp, PFILE_NETWORK_OPEN_INFORMATION Buffer, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoQueryStandardInfo(PFILE_OBJECT FileObject, BOOLEAN Wait, PFILE_STANDARD_INFORMATION Buffer, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoRead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, BOOLEAN Wait, ULONG LockKey, PVOID Buffer, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoUnlockAll(PFILE_OBJECT FileObject, PEPROCESS ProcessId, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoUnlockByKey(PFILE_OBJECT FileObject, PVOID ProcessId, ULONG Key, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoUnlockSingle(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PLARGE_INTEGER Length, PEPROCESS ProcessId, ULONG Key, PIO_STATUS_BLOCK StatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoWrite(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, BOOLEAN Wait, ULONG LockKey, PVOID Buffer, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoMdlRead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoMdlWrite(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatusBlock, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoMdlReadComplete(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoReadCompressed(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PVOID Buffer, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatusBlock, PCOMPRESSED_DATA_INFO CompressedInfo, ULONG CompressedInfoLength, PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoWriteCompressed(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length, ULONG LockKey, PVOID Buffer, PMDL *MdlChain, PIO_STATUS_BLOCK IoStatusBlock, PCOMPRESSED_DATA_INFO CompressedInfo, ULONG CompressedInfoLength, PDEVICE_OBJECT DeviceObject);
NTSTATUS HookHandlerFastIoAcquireForModWrite( IN PFILE_OBJECT FileObject, IN PLARGE_INTEGER EndingOffset, OUT struct _ERESOURCE **ResourceToRelease, IN PDEVICE_OBJECT DeviceObject);
NTSTATUS HookHandlerFastIoReleaseForModWrite( IN PFILE_OBJECT FileObject, IN struct _ERESOURCE *ResourceToRelease, IN PDEVICE_OBJECT DeviceObject);
NTSTATUS HookHandlerFastIoAcquireForCcFlush(IN PFILE_OBJECT FileObject,IN PDEVICE_OBJECT DeviceObject);
NTSTATUS HookHandlerFastIoReleaseForCcFlush( IN PFILE_OBJECT FileObject,IN PDEVICE_OBJECT DeviceObject);
VOID HookHandlerFastIoAcquireFile(PFILE_OBJECT FileObject);
VOID HookHandlerFastIoReleaseFile(PFILE_OBJECT FileObject);
BOOLEAN HookHandlerFastIoMdlReadCompleteCompressed(IN PFILE_OBJECT FileObject,IN PMDL MdlChain, IN PDEVICE_OBJECT DeviceObject);
BOOLEAN HookHandlerFastIoMdlWriteCompleteCompressed(IN PFILE_OBJECT FileObject,IN PLARGE_INTEGER FileOffset, IN PMDL MdlChain,  IN PDEVICE_OBJECT DeviceObject);

NTSTATUS HookHandlerIRPDisptach(PDEVICE_OBJECT Deviceobject, PIRP Irp);
NTSTATUS HookHandlerAddDeviceDispatch(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT PhysicalDeviceObject);
VOID HookHandlerDriverUnloadDisptach(PDRIVER_OBJECT DriverObject);
VOID HookHandlerStartIoDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp);


#endif
