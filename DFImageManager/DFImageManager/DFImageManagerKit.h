// The MIT License (MIT)
//
// Copyright (c) 2015 Alexander Grebenyuk (github.com/kean).
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

#import "DFImageManagerDefines.h"

#import "DFImageManagerProtocol.h"
#import "DFImageFetcherProtocol.h"
#import "DFImageProcessorProtocol.h"
#import "DFImageCacheProtocol.h"
#import "DFImageManagerOperationProtocol.h"

#import "DFImageManager.h"
#import "DFCompositeImageManager.h"
#import "DFProxyImageManager.h"

#import "DFImageRequest.h"
#import "DFImageRequestID.h"
#import "DFImageRequestOptions.h"
#import "DFImageResponse.h"

#import "DFImageProcessingManager.h"

#import "DFCachingImageFetcher.h"

#import "DFURLImageFetcher.h"

#import "DFPhotosKitImageFetcher.h"
#import "DFPhotosKitImageFetchOperation.h"
#import "DFPHAssetlocalIdentifier.h"

#import "DFImageURLCacheLookupOperation.h"
#import "DFImageFetchConnectionOperation.h"
#import "DFURLConnectionOperation.h"
#import "DFURLResponseDeserializing.h"

#import "DFImageView.h"

#import "DFCollectionViewPreheatingController.h"

#import "DFImageUtilities.h"
