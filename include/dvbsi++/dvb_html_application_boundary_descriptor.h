/*
 * $Id$
 *
 * Copyright (C) 2004-2005 St?phane Est?-Gracias <sestegra@free.fr>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 *
 * See the file 'COPYING' in the top level directory for details.
 */

#ifndef __dvb_html_application_boundary_descriptor_h__
#define __dvb_html_application_boundary_descriptor_h__

#include "descriptor.h"

class DvbHtmlApplicationBoundaryDescriptor : public Descriptor
{
	protected:
		uint8_t labelLength			: 8;
		std::string label;
		std::string regularExpression;

	public:
		DvbHtmlApplicationBoundaryDescriptor(const uint8_t * const buffer);

		const std::string &getLabel(void) const;
		const std::string &getRegularExpression(void) const;
};

#endif /* __dvb_html_application_boundary_descriptor_h__ */
