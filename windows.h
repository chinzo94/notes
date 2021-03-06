#ifndef WINDOWS_H
#define WINDOWS_H

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa383751(v=vs.85).aspx
typedef uint8_t BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef void * HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;
typedef HANDLE HPALETTE;
typedef HINSTANCE HMODULE;
typedef int32_t HRESULT;
/// size of pointer.
typedef uint32_t LRESULT;
typedef unsigned int UINT;
/// size of pointer.
typedef uint32_t WPARAM;
/// size of pointer.
typedef uint32_t LPARAM;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/ms646997(v=vs.85).aspx
typedef struct {
	DWORD dwSignature;
	DWORD dwStrucVersion;
	DWORD dwFileVersionMS;
	DWORD dwFileVersionLS;
	DWORD dwProductVersionMS;
	DWORD dwProductVersionLS;
	DWORD dwFileFlagsMask;
	DWORD dwFileFlags;
	DWORD dwFileOS;
	DWORD dwFileType;
	DWORD dwFileSubtype;
	DWORD dwFileDateMS;
	DWORD dwFileDateLS;
} VS_FIXEDFILEINFO;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/dd390970(v=vs.85).aspx
typedef struct {
	WORD  wFormatTag;
	WORD  nChannels;
	DWORD nSamplesPerSec;
	DWORD nAvgBytesPerSec;
	WORD  nBlockAlign;
	WORD  wBitsPerSample;
	WORD  cbSize;
} WAVEFORMATEX;

/// ref: https://msdn.microsoft.com/en-us/library/mt708923(v=vs.85).aspx
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*GetCaps)();
	/// offset: 0010 (4 bytes)
	void (*GetCurrentPosition)();
	/// offset: 0014 (4 bytes)
	void (*GetFormat)();
	/// offset: 0018 (4 bytes)
	void (*GetVolume)();
	/// offset: 001C (4 bytes)
	void (*GetPan)();
	/// offset: 0020 (4 bytes)
	void (*GetFrequency)();
	/// offset: 0024 (4 bytes)
	void (*GetStatus)();
	/// offset: 0028 (4 bytes)
	void (*Initialize)();
	/// offset: 002C (4 bytes)
	void (*Lock)();
	/// offset: 0030 (4 bytes)
	void (*Play)();
	/// offset: 0034 (4 bytes)
	void (*SetCurrentPosition)();
	/// offset: 0038 (4 bytes)
	void (*SetFormat)();
	/// offset: 003C (4 bytes)
	void (*SetVolume)();
	/// offset: 0040 (4 bytes)
	void (*SetPan)();
	/// offset: 0044 (4 bytes)
	void (*SetFrequency)();
	/// offset: 0048 (4 bytes)
	void (*Stop)();
	/// offset: 004C (4 bytes)
	void (*Unlock)();
	/// offset: 0050 (4 bytes)
	void (*Restore)();
} IDirectSoundBufferVtbl;

typedef struct {
	IDirectSoundBufferVtbl *lpVtbl;
} IDirectSoundBuffer;

/// ref: https://msdn.microsoft.com/en-us/library/mt708922(v=vs.85).aspx
///
/// size = 0x2C
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*CreateSoundBuffer)();
	/// offset: 0010 (4 bytes)
	void (*GetCaps)();
	/// offset: 0014 (4 bytes)
	void (*DuplicateSoundBuffer)();
	/// offset: 0018 (4 bytes)
	void (*SetCooperativeLevel)();
	/// offset: 001C (4 bytes)
	void (*Compact)();
	/// offset: 0020 (4 bytes)
	void (*GetSpeakerConfig)();
	/// offset: 0024 (4 bytes)
	void (*SetSpeakerConfig)();
	/// offset: 0028 (4 bytes)
	void (*Initialize)();
} IDirectSoundVtbl;

typedef struct {
	IDirectSoundVtbl *lpVtbl;
} IDirectSound;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426173(v=vs.85).aspx
///
/// size = 0x1C
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*GetCaps)();
	/// offset: 0010 (4 bytes)
	void (*GetEntries)();
	/// offset: 0014 (4 bytes)
	void (*Initialize)();
	/// offset: 0018 (4 bytes)
	void (*SetEntries)();
} IDirectDrawPaletteVtbl;

typedef struct {
	IDirectDrawPaletteVtbl *lpVtbl;
} IDirectDrawPalette;


/// ref: https://msdn.microsoft.com/en-us/library/ee490539.aspx
///
/// size = 0x90
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*AddAttachedSurface)();
	/// offset: 0010 (4 bytes)
	void (*AddOverlayDirtyRect)();
	/// offset: 0014 (4 bytes)
	void (*Blt)();
	/// offset: 0018 (4 bytes)
	void (*BltBatch)();
	/// offset: 001C (4 bytes)
	void (*BltFast)();
	/// offset: 0020 (4 bytes)
	void (*DeleteAttachedSurface)();
	/// offset: 0024 (4 bytes)
	void (*EnumAttachedSurfaces)();
	/// offset: 0028 (4 bytes)
	void (*EnumOverlayZOrders)();
	/// offset: 002C (4 bytes)
	void (*Flip)();
	/// offset: 0030 (4 bytes)
	void (*GetAttachedSurface)();
	/// offset: 0034 (4 bytes)
	void (*GetBltStatus)();
	/// offset: 0038 (4 bytes)
	void (*GetCaps)();
	/// offset: 003C (4 bytes)
	void (*GetClipper)();
	/// offset: 0040 (4 bytes)
	void (*GetColorKey)();
	/// offset: 0044 (4 bytes)
	void (*GetDC)();
	/// offset: 0048 (4 bytes)
	void (*GetFlipStatus)();
	/// offset: 004C (4 bytes)
	void (*GetOverlayPosition)();
	/// offset: 0050 (4 bytes)
	void (*GetPalette)();
	/// offset: 0054 (4 bytes)
	void (*GetPixelFormat)();
	/// offset: 0058 (4 bytes)
	void (*GetSurfaceDesc)();
	/// offset: 005C (4 bytes)
	void (*Initialize)();
	/// offset: 0060 (4 bytes)
	void (*IsLost)();
	/// offset: 0064 (4 bytes)
	void (*Lock)();
	/// offset: 0068 (4 bytes)
	void (*ReleaseDC)();
	/// offset: 006C (4 bytes)
	void (*Restore)();
	/// offset: 0070 (4 bytes)
	void (*SetClipper)();
	/// offset: 0074 (4 bytes)
	void (*SetColorKey)();
	/// offset: 0078 (4 bytes)
	void (*SetOverlayPosition)();
	/// offset: 007C (4 bytes)
	void (*SetPalette)();
	/// offset: 0080 (4 bytes)
	void (*Unlock)();
	/// offset: 0084 (4 bytes)
	void (*UpdateOverlay)();
	/// offset: 0088 (4 bytes)
	void (*UpdateOverlayDisplay)();
	/// offset: 008C (4 bytes)
	void (*UpdateOverlayZOrder)();
} IDirectDrawSurfaceVtbl;

typedef struct {
	IDirectDrawSurfaceVtbl *lpVtbl;
} IDirectDrawSurface;

/// ref: https://msdn.microsoft.com/en-us/library/ee491664.aspx
///
/// size = 0x5C
typedef struct {
	/// TODO: Fill in the correct method signatures below.
	/// offset: 0000 (4 bytes)
	void (*QueryInterface)();
	/// offset: 0004 (4 bytes)
	void (*AddRef)();
	/// offset: 0008 (4 bytes)
	void (*Release)();
	/// offset: 000C (4 bytes)
	void (*Compact)();
	/// offset: 0010 (4 bytes)
	void (*CreateClipper)();
	/// offset: 0014 (4 bytes)
	void (*CreatePalette)();
	/// offset: 0018 (4 bytes)
	void (*CreateSurface)();
	/// offset: 001C (4 bytes)
	void (*DuplicateSurface)();
	/// offset: 0020 (4 bytes)
	void (*EnumDisplayModes)();
	/// offset: 0024 (4 bytes)
	void (*EnumSurfaces)();
	/// offset: 0028 (4 bytes)
	void (*FlipToGDISurface)();
	/// offset: 002C (4 bytes)
	void (*GetCaps)();
	/// offset: 0030 (4 bytes)
	void (*GetDisplayMode)();
	/// offset: 0034 (4 bytes)
	void (*GetFourCCCodes)();
	/// offset: 0038 (4 bytes)
	void (*GetGDISurface)();
	/// offset: 003C (4 bytes)
	void (*GetMonitorFrequency)();
	/// offset: 0040 (4 bytes)
	void (*GetScanLine)();
	/// offset: 0044 (4 bytes)
	void (*GetVerticalBlankStatus)();
	/// offset: 0048 (4 bytes)
	void (*Initialize)();
	/// offset: 004C (4 bytes)
	void (*RestoreDisplayMode)();
	/// offset: 0050 (4 bytes)
	void (*SetCooperativeLevel)();
	/// offset: 0054 (4 bytes)
	void (*SetDisplayMode)();
	/// offset: 0058 (4 bytes)
	void (*WaitForVerticalBlank)();
} IDirectDrawVtbl;

typedef struct {
	IDirectDrawVtbl *lpVtbl;
} IDirectDraw;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/aa373931(v=vs.85).aspx
typedef struct {
	DWORD Data1;
	WORD Data2;
	WORD Data3;
	BYTE Data4[8];
} GUID;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426103(v=vs.85).aspx
typedef struct {
	DWORD dwColorSpaceLowValue;
	DWORD dwColorSpaceHighValue;
} DDCOLORKEY;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426109(v=vs.85).aspx
typedef struct {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwFourCC;
	union {
		DWORD dwRGBBitCount;
		DWORD dwYUVBitCount;
		DWORD dwZBufferBitDepth;
		DWORD dwAlphaBitDepth;
		DWORD dwLuminanceBitCount;
		DWORD dwBumpBitCount;
		DWORD dwPrivateFormatBitCount;
	};
	union {
		DWORD dwRBitMask;
		DWORD dwYBitMask;
		DWORD dwStencilBitDepth;
		DWORD dwLuminanceBitMask;
		DWORD dwBumpDuBitMask;
		DWORD dwOperations;
	};
	union {
		DWORD dwGBitMask;
		DWORD dwUBitMask;
		DWORD dwZBitMask;
		DWORD dwBumpDvBitMask;
		struct {
			WORD wFlipMSTypes;
			WORD wBltMSTypes;
		} MultiSampleCaps;
	};
	union {
		DWORD dwBBitMask;
		DWORD dwVBitMask;
		DWORD dwStencilBitMask;
		DWORD dwBumpLuminanceBitMask;
	};
	union {
		DWORD dwRGBAlphaBitMask;
		DWORD dwYUVAlphaBitMask;
		DWORD dwLuminanceAlphaBitMask;
		DWORD dwRGBZBitMask;
		DWORD dwYUVZBitMask;
	};
} DDPIXELFORMAT;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426110(v=vs.85).aspx
typedef struct {
	DWORD dwCaps;
} DDSCAPS;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/gg426113(v=vs.85).aspx
typedef struct {
	DWORD dwSize;
	DWORD dwFlags;
	DWORD dwHeight;
	DWORD dwWidth;
	union {
		LONG  lPitch;
		DWORD dwLinearSize;
	};
	DWORD dwBackBufferCount;
	union {
		DWORD dwMipMapCount;
		DWORD dwZBufferBitDepth;
		DWORD dwRefreshRate;
	};
	DWORD  dwAlphaBitDepth;
	DWORD  dwReserved;
	void *lpSurface;
	DDCOLORKEY    ddckCKDestOverlay;
	DDCOLORKEY    ddckCKDestBlt;
	DDCOLORKEY    ddckCKSrcOverlay;
	DDCOLORKEY    ddckCKSrcBlt;
	DDPIXELFORMAT ddpfPixelFormat;
	DDSCAPS       ddsCaps;
} DDSURFACEDESC;

/// ref: https://msdn.microsoft.com/en-us/library/windows/desktop/dd162769(v=vs.85).aspx
typedef struct {
	BYTE peRed;
	BYTE peGreen;
	BYTE peBlue;
	BYTE peFlags;
} PALETTEENTRY;

#endif // WINDOWS_H