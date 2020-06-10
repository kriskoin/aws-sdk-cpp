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

#include <aws/codeartifact/model/DomainSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

DomainSummary::DomainSummary() : 
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(DomainStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
}

DomainSummary::DomainSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(DomainStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

DomainSummary& DomainSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DomainStatusMapper::GetNameForDomainStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
