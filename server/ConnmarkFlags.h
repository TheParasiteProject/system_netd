/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _CONNMARK_FLAGS_H
#define _CONNMARK_FLAGS_H

/*
 * iptables CONNMARK flag values used by various controllers. These values
 * need to be stored in one place to avoid clashes.
 *
 * Note: the last 20 bits of the connmark are reserved for storing the partial fwmark.
 */
enum class ConnmarkFlags : unsigned {
    STRICT_RESOLVED_ACCEPT = 0x01000000,
    STRICT_RESOLVED_REJECT = 0x02000000,
};

/*
 * Mask to mask out the parts of the fwmark that get stored inside the connmark.
 */
constexpr unsigned CONNMARK_FWMARK_MASK = 0x000FFFFF;

#endif
