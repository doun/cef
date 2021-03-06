// Copyright (c) 2011 The Chromium Embedded Framework Authors.
// Portions copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CEF_LIBCEF_DOWNLOAD_UTIL_H_
#define CEF_LIBCEF_DOWNLOAD_UTIL_H_
#pragma once

#include <string>

class GURL;

namespace base {
class FilePath;
}

namespace download_util {

// Create a file name based on the response from the server.
void GenerateFileName(const GURL& url,
                      const std::string& content_disposition,
                      const std::string& referrer_charset,
                      const std::string& mime_type,
                      const std::string& suggested_name,
                      base::FilePath* generated_name);

}  // namespace download_util

#endif  // CEF_LIBCEF_DOWNLOAD_UTIL_H_
