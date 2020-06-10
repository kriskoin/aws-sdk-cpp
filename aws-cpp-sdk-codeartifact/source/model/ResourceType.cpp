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

#include <aws/codeartifact/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int domain_HASH = HashingUtils::HashString("domain");
        static const int repository_HASH = HashingUtils::HashString("repository");
        static const int package_HASH = HashingUtils::HashString("package");
        static const int package_version_HASH = HashingUtils::HashString("package-version");
        static const int asset_HASH = HashingUtils::HashString("asset");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == domain_HASH)
          {
            return ResourceType::domain;
          }
          else if (hashCode == repository_HASH)
          {
            return ResourceType::repository;
          }
          else if (hashCode == package_HASH)
          {
            return ResourceType::package;
          }
          else if (hashCode == package_version_HASH)
          {
            return ResourceType::package_version;
          }
          else if (hashCode == asset_HASH)
          {
            return ResourceType::asset;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::domain:
            return "domain";
          case ResourceType::repository:
            return "repository";
          case ResourceType::package:
            return "package";
          case ResourceType::package_version:
            return "package-version";
          case ResourceType::asset:
            return "asset";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
