/*******************************************************************************
 * Copyright (c) 2000, 2006 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#ifndef INC_xpcomglue_H
#define INC_xpcomglue_H

#define NDEBUG

#include "nsXPCOMGlue.h"

#ifdef _WIN32
#define STDMETHODCALLTYPE __stdcall
#else
#define STDMETHODCALLTYPE
#endif

#endif /* INC_xpcomglue_H */
