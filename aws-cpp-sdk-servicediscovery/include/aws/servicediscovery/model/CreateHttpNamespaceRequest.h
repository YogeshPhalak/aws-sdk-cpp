﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API CreateHttpNamespaceRequest : public ServiceDiscoveryRequest
  {
  public:
    CreateHttpNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHttpNamespace"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline CreateHttpNamespaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline CreateHttpNamespaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to this namespace.</p>
     */
    inline CreateHttpNamespaceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline CreateHttpNamespaceRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline CreateHttpNamespaceRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateHttpNamespace</code> requests to be retried without the risk of
     * running the operation twice. <code>CreatorRequestId</code> can be any unique
     * string, for example, a date/time stamp.</p>
     */
    inline CreateHttpNamespaceRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A description for the namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreateHttpNamespaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreateHttpNamespaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the namespace.</p>
     */
    inline CreateHttpNamespaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreateHttpNamespaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreateHttpNamespaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreateHttpNamespaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the namespace. Each tag consists of a key and an optional
     * value that you define. Tags keys can be up to 128 characters in length, and tag
     * values can be up to 256 characters in length.</p>
     */
    inline CreateHttpNamespaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
