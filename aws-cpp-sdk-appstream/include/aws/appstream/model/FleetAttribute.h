﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class FleetAttribute
  {
    NOT_SET,
    VPC_CONFIGURATION,
    VPC_CONFIGURATION_SECURITY_GROUP_IDS,
    DOMAIN_JOIN_INFO,
    IAM_ROLE_ARN
  };

namespace FleetAttributeMapper
{
AWS_APPSTREAM_API FleetAttribute GetFleetAttributeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForFleetAttribute(FleetAttribute value);
} // namespace FleetAttributeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
