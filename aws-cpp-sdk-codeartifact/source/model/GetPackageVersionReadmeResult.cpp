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

#include <aws/codeartifact/model/GetPackageVersionReadmeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPackageVersionReadmeResult::GetPackageVersionReadmeResult() : 
    m_format(PackageFormat::NOT_SET)
{
}

GetPackageVersionReadmeResult::GetPackageVersionReadmeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(PackageFormat::NOT_SET)
{
  *this = result;
}

GetPackageVersionReadmeResult& GetPackageVersionReadmeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("format"))
  {
    m_format = PackageFormatMapper::GetPackageFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

  }

  if(jsonValue.ValueExists("package"))
  {
    m_package = jsonValue.GetString("package");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("versionRevision"))
  {
    m_versionRevision = jsonValue.GetString("versionRevision");

  }

  if(jsonValue.ValueExists("readme"))
  {
    m_readme = jsonValue.GetString("readme");

  }



  return *this;
}
